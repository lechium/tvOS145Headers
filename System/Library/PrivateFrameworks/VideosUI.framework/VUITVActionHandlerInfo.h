/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:15 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol VUITVButtonHandler;
@interface VUITVActionHandlerInfo : NSObject {

	id<VUITVButtonHandler> _handler;
	/*^block*/id _completion;

}

@property (nonatomic,retain) id<VUITVButtonHandler> handler;              //@synthesize handler=_handler - In the implementation block
@property (nonatomic,copy) id completion;                                 //@synthesize completion=_completion - In the implementation block
-(id)completion;
-(void)setHandler:(id<VUITVButtonHandler>)arg1 ;
-(id<VUITVButtonHandler>)handler;
-(void)setCompletion:(id)arg1 ;
@end

