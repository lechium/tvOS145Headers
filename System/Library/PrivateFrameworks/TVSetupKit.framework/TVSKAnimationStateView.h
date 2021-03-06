/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:11 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TVSetupKit.framework/TVSetupKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIView.h>

@class CAPackage, CAStateController, CALayer;

@interface TVSKAnimationStateView : UIView {

	unsigned long long _currentAnimationResource;
	CAPackage* _package;
	CAStateController* _stateController;
	CALayer* _animationStateLayer;

}

@property (assign,nonatomic) unsigned long long currentAnimationResource;              //@synthesize currentAnimationResource=_currentAnimationResource - In the implementation block
@property (nonatomic,retain) CAPackage * package;                                      //@synthesize package=_package - In the implementation block
@property (nonatomic,retain) CAStateController * stateController;                      //@synthesize stateController=_stateController - In the implementation block
@property (nonatomic,retain) CALayer * animationStateLayer;                            //@synthesize animationStateLayer=_animationStateLayer - In the implementation block
-(void)setPackage:(CAPackage *)arg1 ;
-(CAPackage *)package;
-(CAStateController *)stateController;
-(long long)_remoteType;
-(void)setStateController:(CAStateController *)arg1 ;
-(void)setAnimationStateForType:(unsigned long long)arg1 inResource:(unsigned long long)arg2 ;
-(void)setAnimationStateInCurrentResourceWithAnimationType:(unsigned long long)arg1 ;
-(void)runTimelineAnimationForDiscoveredPairingRemoteType:(long long)arg1 ;
-(id)_packageNameForResource:(unsigned long long)arg1 ;
-(id)_layerForUpdatedPackageWithName:(id)arg1 ;
-(id)_resourceNameForRemoteType:(long long)arg1 andNamePrefix:(id)arg2 ;
-(id)_addTraitSuffix:(id)arg1 ;
-(void)_runTimelineAnimationWithName:(id)arg1 ;
-(id)_stateNameForAnimationType:(unsigned long long)arg1 ;
-(unsigned long long)currentAnimationResource;
-(void)setCurrentAnimationResource:(unsigned long long)arg1 ;
-(CALayer *)animationStateLayer;
-(void)setAnimationStateLayer:(CALayer *)arg1 ;
@end

