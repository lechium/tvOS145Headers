//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString;

@interface _PBWallpaperSceneView : UIView
{
    _Bool _wallpaperEnabled;	// 8 = 0x8
    NSString *_bundleIdentifier;	// 16 = 0x10
    UIView *_contentView;	// 24 = 0x18
    UIView *_wallpaperView;	// 32 = 0x20
    UIView *_contentViewToAnimateToOnInterfaceChange;	// 40 = 0x28
}

+ (_Bool)isWallpaperRequired;	// IMP=0x0000000100219508
- (void).cxx_destruct;	// IMP=0x000000010021a26c
@property(nonatomic, getter=isWallpaperEnabled) _Bool wallpaperEnabled; // @synthesize wallpaperEnabled=_wallpaperEnabled;
@property(retain, nonatomic) UIView *contentViewToAnimateToOnInterfaceChange; // @synthesize contentViewToAnimateToOnInterfaceChange=_contentViewToAnimateToOnInterfaceChange;
@property(retain, nonatomic) UIView *wallpaperView; // @synthesize wallpaperView=_wallpaperView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (id)_newWallpaperView;	// IMP=0x0000000100219fc0
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000001002199f8
- (void)_setContinuousCornerRadius:(double)arg1;	// IMP=0x000000010021985c
- (id)initWithBundleIdentifier:(id)arg1 allowsGroupOpacity:(_Bool)arg2;	// IMP=0x0000000100219524

@end

