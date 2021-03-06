/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:39 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/FBSceneLayerManagerObserver.h>

@protocol _UISceneLayerHostContainerViewDataSource;
@class FBScene, NSMutableOrderedSet, NSMutableSet, FBSSceneSettings, UIScenePresentationContext, NSSet, NSString;

@interface _UISceneLayerHostContainerView : UIView <FBSceneLayerManagerObserver> {

	FBScene* _scene;
	id<_UISceneLayerHostContainerViewDataSource> _dataSource;
	NSMutableOrderedSet* _hostViews;
	NSMutableOrderedSet* _hostedLayers;
	NSMutableSet* _hiddenLayers;
	FBSSceneSettings* _effectiveSceneSettings;
	UIScenePresentationContext* _presentationContext;

}

@property (nonatomic,__weak,readonly) FBScene * scene;                                                      //@synthesize scene=_scene - In the implementation block
@property (nonatomic,__weak,readonly) id<_UISceneLayerHostContainerViewDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) NSSet * hostedLayers; 
@property (nonatomic,readonly) NSSet * nonHostedLayers; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(NSString *)debugDescription;
-(id)init;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(FBScene *)scene;
-(id<_UISceneLayerHostContainerViewDataSource>)dataSource;
-(id)window;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(void)_setDataSource:(id)arg1 ;
-(id)initWithScene:(id)arg1 ;
-(id)_hitTest:(CGPoint)arg1 withEvent:(id)arg2 windowServerHitTestWindow:(id)arg3 ;
-(void)sceneLayerManagerDidUpdateLayers:(id)arg1 ;
-(void)_rebuildLayersForReason:(id)arg1 ;
-(void)_refreshDataSource;
-(void)_adjustHostViewFrameAlignment:(id)arg1 ;
-(void)_updateRenderingMode;
-(void)_setPresentationContext:(id)arg1 ;
-(void)_presentationContextChangedFrom:(id)arg1 toContext:(id)arg2 force:(BOOL)arg3 ;
-(void)_toggleClippingDisabledWithNewContext:(id)arg1 ;
-(id)_presentationContextForLayer:(id)arg1 ;
-(BOOL)_canShowKeyboardLayer;
-(id)_filteredLayersToPresent;
-(id)_createHostViewForLayer:(id)arg1 ;
-(NSSet *)hostedLayers;
-(NSSet *)nonHostedLayers;
-(void)pushDataSource:(id)arg1 ;
-(void)popDataSource:(id)arg1 ;
-(void)refreshDataSource:(id)arg1 ;
-(void)updateForGeometrySettingsChanges:(id)arg1 ;
@end

