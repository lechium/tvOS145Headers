/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:53 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AXMediaUtilities/AXMTask.h>

@class NSUUID, AXMVisionPipelineContext, AXMSourceNode;

@interface _AXMVisionEngineAnalysisTask : AXMTask {

	NSUUID* _identifier;
	AXMVisionPipelineContext* _context;
	AXMSourceNode* _source;

}

@property (nonatomic,retain) NSUUID * identifier;                             //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) AXMVisionPipelineContext * context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) AXMSourceNode * source;                          //@synthesize source=_source - In the implementation block
+(id)itemWithSource:(id)arg1 context:(id)arg2 ;
-(NSUUID *)identifier;
-(AXMSourceNode *)source;
-(void)setSource:(AXMSourceNode *)arg1 ;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(AXMVisionPipelineContext *)context;
-(void)setContext:(AXMVisionPipelineContext *)arg1 ;
-(id)initWithSource:(id)arg1 context:(id)arg2 ;
@end

