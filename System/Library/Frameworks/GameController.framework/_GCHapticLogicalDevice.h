/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:24 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/GameController.framework/GameController
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol _GCLogicalDevice, NSCopyingNSObjectNSSecureCoding, _GCDriverClientInterface;
@class NSMutableArray, _GCHapticClientProxy;

@interface _GCHapticLogicalDevice : NSObject {

	id<_GCLogicalDevice> _logicalDevice;
	id<NSCopying><NSObject><NSSecureCoding> _identifier;
	NSMutableArray* _hapticClients;
	NSMutableArray* _hapticPlayers;
	float _prevSharpness[4];
	float _prevIntensity[4];
	id<_GCDriverClientInterface> _driver;
	_GCHapticClientProxy* _clientConnection;

}
-(id)initWithIdentifier:(id)arg1 clientConnection:(id)arg2 ;
-(void)registerHapticClient:(id)arg1 ;
-(void)unregisterHapticClient:(id)arg1 ;
-(BOOL)hasClients;
-(void)stopAllHaptics;
@end

