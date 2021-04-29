/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:07 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWMetadataTimeMachineRequest.h>

@class NSArray;

@interface BWMetadataTimeMachineMetadataRequest : BWMetadataTimeMachineRequest {

	SCD_Struct_BW35 _ptsRange;
	NSArray* _metadataForPTSRange;

}

@property (nonatomic,readonly) SCD_Struct_BW35 ptsRange;                   //@synthesize ptsRange=_ptsRange - In the implementation block
@property (nonatomic,readonly) NSArray * metadataForPTSRange;              //@synthesize metadataForPTSRange=_metadataForPTSRange - In the implementation block
-(void)dealloc;
-(id)initWithPTSRange:(SCD_Struct_BW35)arg1 ;
-(void)completeWithMetadata:(id)arg1 ;
-(SCD_Struct_BW35)ptsRange;
-(NSArray *)metadataForPTSRange;
@end

