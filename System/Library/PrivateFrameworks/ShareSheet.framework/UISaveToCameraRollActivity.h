/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:35 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ShareSheet/UIActivity.h>

@class _UISaveToCameraRollSaveItemsController;

@interface UISaveToCameraRollActivity : UIActivity {

	long long _imageCount;
	long long _livePhotoCount;
	long long _videoCount;
	_UISaveToCameraRollSaveItemsController* _saveController;

}

@property (assign,nonatomic) long long imageCount;                                                 //@synthesize imageCount=_imageCount - In the implementation block
@property (assign,nonatomic) long long livePhotoCount;                                             //@synthesize livePhotoCount=_livePhotoCount - In the implementation block
@property (assign,nonatomic) long long videoCount;                                                 //@synthesize videoCount=_videoCount - In the implementation block
@property (nonatomic,retain) _UISaveToCameraRollSaveItemsController * saveController;              //@synthesize saveController=_saveController - In the implementation block
+(unsigned long long)_xpcAttributes;
-(id)activityType;
-(long long)imageCount;
-(id)_systemImageName;
-(id)_activityImage;
-(id)activityTitle;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(void)performActivity;
-(void)prepareWithActivityItems:(id)arg1 ;
-(long long)videoCount;
-(void)setVideoCount:(long long)arg1 ;
-(void)setImageCount:(long long)arg1 ;
-(/*^block*/id)_backgroundPreheatBlock;
-(long long)livePhotoCount;
-(void)setLivePhotoCount:(long long)arg1 ;
-(_UISaveToCameraRollSaveItemsController *)saveController;
-(void)setSaveController:(_UISaveToCameraRollSaveItemsController *)arg1 ;
@end

