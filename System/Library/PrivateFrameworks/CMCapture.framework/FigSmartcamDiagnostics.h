/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:10 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CMCapture/CMCapture-Structs.h>
@class NSMutableDictionary;

@interface FigSmartcamDiagnostics : NSObject {

	NSMutableDictionary* _metadata;

}
-(id)init;
-(id)metadata;
-(BOOL)addMotionStats:(SCD_Struct_Fi106)arg1 ;
-(void)addSceneConfidences:(id)arg1 ;
-(void)addPAMDecisionPreliminary:(id)arg1 ;
-(BOOL)addClassifierVersionMajor:(unsigned short)arg1 minor:(unsigned short)arg2 patch:(unsigned short)arg3 ;
@end

