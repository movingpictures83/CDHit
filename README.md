# Language: C++
# Input: FASTA
# Output: prefix
# Tested with: PluMA 1.0, GCC 4.8.4

PluMA plugin to run the cd-hit clustering algorithm (Li and Godzik, 2006)
on a set of sequences.

The plugin expects as input a FASTA file and will generate two output files beginning with the user-specified prefix:
A list of the clusters in FASTA format, separated by 'C'
A txt file of the clusters, nicely formatted

The plugin relies on cd-hit being in your system PATH.
