/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:40 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/IMCorePipeline.framework/IMCorePipeline
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IMCorePipeline/IMPipelineComponent.h>

@protocol IMPipelineComponent
@required
-(id)runWithInput:(id)arg1;
-(id)runIndividuallyWithInput:(id)arg1;
-(id)bindTo:(id)arg1;

@end


@protocol IMPipelineComponent;
@interface IMPipelineComponent : NSObject <IMPipelineComponent> {

	id<IMPipelineComponent> _nextComponent;

}

@property (nonatomic,retain) id<IMPipelineComponent> nextComponent;              //@synthesize nextComponent=_nextComponent - In the implementation block
+(id)pipelineFromComponents:(id)arg1 ;
-(id<IMPipelineComponent>)nextComponent;
-(id)runWithInput:(id)arg1 ;
-(id)runIndividuallyWithInput:(id)arg1 ;
-(id)bindTo:(id)arg1 ;
-(void)setNextComponent:(id<IMPipelineComponent>)arg1 ;
@end

