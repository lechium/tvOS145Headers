/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:27 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PXActionPerformerDelegate;
#import <PhotosUICore/PhotosUICore-Structs.h>
@class UIViewController, PXBarSpec, NSMutableDictionary, NSArray;

@interface PXBarsController : NSObject {

	SCD_Struct_PX37 _needsUpdateFlags;
	BOOL _wantsAnimatedBarsUpdate;
	UIViewController* _viewController;
	id<PXActionPerformerDelegate> _actionPerformerDelegate;
	PXBarSpec* _barSpec;
	NSMutableDictionary* _barButtonItemCache;
	NSMutableDictionary* _barButtonItemCachedPlacement;

}

@property (nonatomic,retain) PXBarSpec * barSpec;                                                       //@synthesize barSpec=_barSpec - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * barButtonItemCache;                                //@synthesize barButtonItemCache=_barButtonItemCache - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * barButtonItemCachedPlacement;                      //@synthesize barButtonItemCachedPlacement=_barButtonItemCachedPlacement - In the implementation block
@property (nonatomic,readonly) double fixedSpaceForInterButtonSpacing; 
@property (nonatomic,readonly) double fixedSpaceForEndButtonSpacing; 
@property (assign,nonatomic,__weak) UIViewController * viewController;                                  //@synthesize viewController=_viewController - In the implementation block
@property (assign,nonatomic,__weak) id<PXActionPerformerDelegate> actionPerformerDelegate;              //@synthesize actionPerformerDelegate=_actionPerformerDelegate - In the implementation block
@property (assign,nonatomic) BOOL wantsAnimatedBarsUpdate;                                              //@synthesize wantsAnimatedBarsUpdate=_wantsAnimatedBarsUpdate - In the implementation block
@property (nonatomic,readonly) NSArray * leftBarButtonItemIdentifiers; 
@property (nonatomic,readonly) NSArray * rightBarButtonItemIdentifiers; 
@property (nonatomic,readonly) NSArray * toolbarItemIdentifiers; 
-(id)init;
-(BOOL)_needsUpdate;
-(void)updateIfNeeded;
-(void)setViewController:(UIViewController *)arg1 ;
-(UIViewController *)viewController;
-(PXBarSpec *)barSpec;
-(void)invalidateBars;
-(void)_updateBarsIfNeeded;
-(void)setBarSpec:(PXBarSpec *)arg1 ;
-(void)updateBars;
-(NSArray *)leftBarButtonItemIdentifiers;
-(NSArray *)rightBarButtonItemIdentifiers;
-(NSArray *)toolbarItemIdentifiers;
-(id)_getCachedOrCreateNewBarButtonItemForIdentifier:(id)arg1 placement:(unsigned long long)arg2 ;
-(id)createBarButtonItemForIdentifier:(id)arg1 placement:(unsigned long long)arg2 ;
-(void)invalidateBarButtonItemWithIdentifier:(id)arg1 ;
-(id)cachedBarButtonItemForIdentifier:(id)arg1 ;
-(void)purgeCachedBarButtonItemsForIdentifiers:(id)arg1 ;
-(double)fixedSpaceForInterButtonSpacing;
-(double)fixedSpaceForEndButtonSpacing;
-(id<PXActionPerformerDelegate>)actionPerformerDelegate;
-(void)setActionPerformerDelegate:(id<PXActionPerformerDelegate>)arg1 ;
-(BOOL)wantsAnimatedBarsUpdate;
-(void)setWantsAnimatedBarsUpdate:(BOOL)arg1 ;
-(NSMutableDictionary *)barButtonItemCache;
-(NSMutableDictionary *)barButtonItemCachedPlacement;
@end

