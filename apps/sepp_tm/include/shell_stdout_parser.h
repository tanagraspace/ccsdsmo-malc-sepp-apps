/*  =========================================================================
    shell_stdout_parser - class description

    The MIT License (MIT)
    =========================================================================
*/

#ifndef SHELL_STDOUT_PARSER_H_INCLUDED
#define SHELL_STDOUT_PARSER_H_INCLUDED

#ifdef __cplusplus
extern "C" {
#endif

//  --------------------------------------------------------------------------
//  Parse stdout of free memory shell command

SEPP_TM_EXPORT int
    shell_stdout_parser_parse_free_memory (char *std_out, sepp_tm_free_memory_t *sepp_tm_free_memory);

//  --------------------------------------------------------------------------
//  Parse stdout of free cpu shell command

SEPP_TM_EXPORT int
    shell_stdout_parser_parse_free_cpu (char *std_out, sepp_tm_free_cpu_t *sepp_tm_free_cpu);

//  --------------------------------------------------------------------------
//  Parse stdout of disk usage shell command

SEPP_TM_EXPORT int
    shell_stdout_parser_parse_disk_usage (char *std_out, sepp_tm_disk_usage_t *sepp_tm_disk_usage);

//  --------------------------------------------------------------------------
//  Self test of this class

SEPP_TM_EXPORT void
    shell_stdout_parser_test (bool verbose);

//  @end

#ifdef __cplusplus
}
#endif

#endif