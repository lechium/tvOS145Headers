/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:10 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Vision/Vision-Structs.h>
#import <Vision/VNImageBasedRequest.h>

@interface VNRecognizeAnimalsRequest : VNImageBasedRequest
+(id)defaultProcessingDeviceForRevision:(unsigned long long)arg1 ;
+(BOOL)warmUpSession:(id)arg1 error:(id*)arg2 ;
+(const SCD_Struct_VN2*)revisionAvailability;
+(id)descriptionForPrivateRevision:(unsigned long long)arg1 ;
+(BOOL)supportsPrivateRevision:(unsigned long long)arg1 ;
+(id)knownAnimalIdentifiersForRevision:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)warmUpSession:(id)arg1 error:(id*)arg2 ;
-(BOOL)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(long long)dependencyProcessingOrdinality;
@end
