
# PlanAhead Launch Script for Post-Synthesis floorplanning, created by Project Navigator

create_project -name test -dir "/home/student/Embedded/Test/test/planAhead_run_2" -part xc3s500evq100-5
set_property design_mode GateLvl [get_property srcset [current_run -impl]]
set_property edif_top_file "/home/student/Embedded/Test/test/main.ngc" [ get_property srcset [ current_run ] ]
add_files -norecurse { {/home/student/Embedded/Test/test} }
set_property target_constrs_file "implementation.ucf" [current_fileset -constrset]
add_files [list {implementation.ucf}] -fileset [get_property constrset [current_run]]
link_design
