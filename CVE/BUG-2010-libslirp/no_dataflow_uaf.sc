@main def execute(payload: String) = {
	importCpg(payload)

	cpg.call
	    .name(".*free*.")
            .argument
            .foreach(freed_arg => {
                val uaf = cpg.call.name("g_free")
                             .postDominatedBy
                             .isCall
                             .argument
                             .code
                             .filter(_.contains(freed_arg.code))

                println(uaf)})
 
}
