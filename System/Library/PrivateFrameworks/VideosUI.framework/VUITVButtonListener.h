/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:15 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class UITapGestureRecognizer, NSMapTable;

@interface VUITVButtonListener : NSObject {

	UITapGestureRecognizer* _tvButtonRecognizer;
	NSMapTable* _gestureToHandlerMap;

}

@property (nonatomic,retain) UITapGestureRecognizer * tvButtonRecognizer;              //@synthesize tvButtonRecognizer=_tvButtonRecognizer - In the implementation block
@property (nonatomic,retain) NSMapTable * gestureToHandlerMap;                         //@synthesize gestureToHandlerMap=_gestureToHandlerMap - In the implementation block
+(id)defaultListener;
-(id)init;
-(void)_tvButtonAction:(id)arg1 ;
-(void)setTvButtonRecognizer:(UITapGestureRecognizer *)arg1 ;
-(UITapGestureRecognizer *)tvButtonRecognizer;
-(NSMapTable *)gestureToHandlerMap;
-(id)initWithAttachingToView:(id)arg1 ;
-(void)registerHandler:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setGestureToHandlerMap:(NSMapTable *)arg1 ;
@end
