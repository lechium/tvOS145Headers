/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:38 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXSettings.h>

@class NSString;

@interface PXAlbumsDebugUISettings : PXSettings {

	BOOL _showBestKeyFrameDebugAlbum;
	BOOL _showUtilitiesDebugAlbum;
	BOOL _showDreamyDebugAlbum;
	BOOL _showCustomDebugAlbum;
	NSString* _customDebugAlbumTitle;
	NSString* _customDebugInternalPredicate;
	NSString* _customDebugPredicate;

}

@property (assign,nonatomic) BOOL showBestKeyFrameDebugAlbum;                    //@synthesize showBestKeyFrameDebugAlbum=_showBestKeyFrameDebugAlbum - In the implementation block
@property (assign,nonatomic) BOOL showUtilitiesDebugAlbum;                       //@synthesize showUtilitiesDebugAlbum=_showUtilitiesDebugAlbum - In the implementation block
@property (assign,nonatomic) BOOL showDreamyDebugAlbum;                          //@synthesize showDreamyDebugAlbum=_showDreamyDebugAlbum - In the implementation block
@property (assign,nonatomic) BOOL showCustomDebugAlbum;                          //@synthesize showCustomDebugAlbum=_showCustomDebugAlbum - In the implementation block
@property (nonatomic,copy) NSString * customDebugAlbumTitle;                     //@synthesize customDebugAlbumTitle=_customDebugAlbumTitle - In the implementation block
@property (nonatomic,copy) NSString * customDebugInternalPredicate;              //@synthesize customDebugInternalPredicate=_customDebugInternalPredicate - In the implementation block
@property (nonatomic,copy) NSString * customDebugPredicate;                      //@synthesize customDebugPredicate=_customDebugPredicate - In the implementation block
+(id)sharedInstance;
+(id)settingsControllerModule;
+(/*^block*/id)_predicateValidatorUsingInternalPredicate:(BOOL)arg1 ;
-(void)setDefaultValues;
-(id)parentSettings;
-(BOOL)showBestKeyFrameDebugAlbum;
-(void)setShowBestKeyFrameDebugAlbum:(BOOL)arg1 ;
-(BOOL)showUtilitiesDebugAlbum;
-(void)setShowUtilitiesDebugAlbum:(BOOL)arg1 ;
-(BOOL)showDreamyDebugAlbum;
-(void)setShowDreamyDebugAlbum:(BOOL)arg1 ;
-(BOOL)showCustomDebugAlbum;
-(void)setShowCustomDebugAlbum:(BOOL)arg1 ;
-(NSString *)customDebugAlbumTitle;
-(void)setCustomDebugAlbumTitle:(NSString *)arg1 ;
-(NSString *)customDebugInternalPredicate;
-(void)setCustomDebugInternalPredicate:(NSString *)arg1 ;
-(NSString *)customDebugPredicate;
-(void)setCustomDebugPredicate:(NSString *)arg1 ;
@end

