/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:09 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Vision/Vision-Structs.h>
#import <Vision/VNImageBasedRequest.h>

@class NSArray;

@interface VNDetectHumanHandPoseRequest : VNImageBasedRequest

@property (assign) unsigned long long maximumHandCount; 
@property (copy,readonly) NSArray * results; 
+(Class)configurationClass;
+(const SCD_Struct_VN2*)revisionAvailability;
+(id)supportedRecognizedPointKeysForRevision:(unsigned long long)arg1 error:(id*)arg2 ;
+(id)supportedRecognizedPointGroupKeysForRevision:(unsigned long long)arg1 error:(id*)arg2 ;
+(id)supportedIdentifiedPointKeysForRevision:(unsigned long long)arg1 error:(id*)arg2 ;
+(id)supportedIdentifiedPointGroupKeysForRevision:(unsigned long long)arg1 error:(id*)arg2 ;
+(id)supportedJointNamesForRevision:(unsigned long long)arg1 error:(id*)arg2 ;
+(id)supportedJointsGroupNamesForRevision:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)warmUpSession:(id)arg1 error:(id*)arg2 ;
-(BOOL)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)arg1 session:(id)arg2 ;
-(BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1 ;
-(/*^block*/id)resultsSortingComparator;
-(void)setSortedResults:(id)arg1 ;
-(unsigned long long)maximumHandCount;
-(void)setMaximumHandCount:(unsigned long long)arg1 ;
@end

