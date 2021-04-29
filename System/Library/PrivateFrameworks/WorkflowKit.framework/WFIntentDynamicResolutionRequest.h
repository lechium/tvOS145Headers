/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:33 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface WFIntentDynamicResolutionRequest : NSObject {

	BOOL _cancelled;
	/*^block*/id _resolutionBlock;

}

@property (nonatomic,copy) id resolutionBlock;                                 //@synthesize resolutionBlock=_resolutionBlock - In the implementation block
@property (getter=isCancelled,nonatomic,readonly) BOOL cancelled;              //@synthesize cancelled=_cancelled - In the implementation block
-(id)init;
-(void)cancel;
-(BOOL)isCancelled;
-(id)resolutionBlock;
-(void)setResolutionBlock:(id)arg1 ;
@end

