/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
 */

@interface PAContiguousStack : NSObject {
    unsigned int  _firstTimestampIndex;
    unsigned long long  _previousCpuTimeNs;
    NSMutableArray * _threads;
}

@property (readonly) unsigned long long dispatchQueueId;
@property (readonly) unsigned long long threadId;

- (void).cxx_destruct;
- (void)addSampleThread:(id)arg1 atTimestampIndex:(unsigned int)arg2;
- (unsigned int)count;
- (unsigned long long)cpuTimeNs;
- (id)debugDescription;
- (unsigned long long)dispatchQueueId;
- (unsigned int)firstTimestampIndex;
- (BOOL)hasSingleName:(id*)arg1;
- (id)initWithTimestampIndex:(unsigned int)arg1 andPreviousCpuTimeNs:(unsigned long long)arg2;
- (BOOL)isGlobalForcedIdleThread;
- (BOOL)isIdleWorkQueueThread;
- (BOOL)isProcessorIdleThread;
- (BOOL)isSingleStackWithLeafUserFrame:(id)arg1 andLeafKernelFrame:(id)arg2;
- (void)iterateSampleTaskThreadPairsWithTasks:(id)arg1 fromTimestampIndex:(unsigned int)arg2 toTimestampIndex:(unsigned int)arg3 callback:(id /* block */)arg4;
- (void)iterateSampleThreadsFromTimestampIndex:(unsigned int)arg1 toTimestampIndex:(unsigned int)arg2 callback:(id /* block */)arg3;
- (unsigned int)lastTimestampIndex;
- (id)sampleThreadAtTimestampIndex:(unsigned int)arg1;
- (BOOL)threadExistedPreviously;
- (unsigned long long)threadId;

@end