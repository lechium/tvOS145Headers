/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:23 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SampleAnalysis/SampleAnalysis-Structs.h>
#import <libobjc.A.dylib/SASerializable.h>

@class NSMutableArray, SATimestamp, SAFrame, NSString, NSArray;

@interface SAThread : NSObject <SASerializable> {

	NSMutableArray* _threadStates;
	BOOL _isGlobalForcedIdle;
	BOOL _isMainThread;
	unsigned long long _threadId;
	SATimestamp* _creationTimestamp;
	SATimestamp* _exitTimestamp;
	SAFrame* _resampledLeafUserFrame;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) unsigned long long threadId;                   //@synthesize threadId=_threadId - In the implementation block
@property (readonly) SATimestamp * creationTimestamp; 
@property (readonly) SATimestamp * exitTimestamp; 
@property (readonly) BOOL isGlobalForcedIdle; 
@property (readonly) BOOL isProcessorIdleThread; 
@property (readonly) BOOL isMainThread; 
@property (readonly) NSArray * threadStates;                        //@synthesize threadStates=_threadStates - In the implementation block
+(id)classDictionaryKey;
+(id)newInstanceWithoutReferencesFromSerializedBuffer:(const void*)arg1 bufferLength:(unsigned long long)arg2 ;
-(NSString *)debugDescription;
-(BOOL)isMainThread;
-(SATimestamp *)creationTimestamp;
-(unsigned long long)threadId;
-(id)initWithId:(unsigned long long)arg1 ;
-(unsigned long long)sizeInBytesForSerializedVersion;
-(void)addSelfToSerializationDictionary:(id)arg1 ;
-(BOOL)addSelfToBuffer:(SCD_Struct_SA14*)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(id)arg3 ;
-(void)populateReferencesUsingBuffer:(const void*)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(id)arg3 andDataBufferDictionary:(id)arg4 ;
-(SATimestamp *)exitTimestamp;
-(NSArray *)threadStates;
-(void)enumerateThreadStatesBetweenStartTime:(id)arg1 endTime:(id)arg2 reverseOrder:(BOOL)arg3 withSampleIndex:(BOOL)arg4 block:(/*^block*/id)arg5 ;
-(unsigned long long)indexOfFirstThreadStateOnOrAfterTime:(id)arg1 withSampleIndex:(BOOL)arg2 ;
-(unsigned long long)indexOfLastThreadStateOnOrBeforeTime:(id)arg1 withSampleIndex:(BOOL)arg2 ;
-(id)firstThreadStateOnOrAfterTime:(id)arg1 withSampleIndex:(BOOL)arg2 ;
-(id)lastThreadStateOnOrBeforeTime:(id)arg1 withSampleIndex:(BOOL)arg2 ;
-(unsigned long long)sampleCountInTimestampRangeStart:(id)arg1 end:(id)arg2 ;
-(id)patchedStackForTruncatedStack:(id)arg1 ;
-(BOOL)isProcessorIdleThread;
-(BOOL)isGlobalForcedIdle;
@end

