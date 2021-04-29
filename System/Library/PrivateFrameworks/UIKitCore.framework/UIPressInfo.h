/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:53 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class UIKey;

@interface UIPressInfo : NSObject {

	BOOL _longClick;
	unsigned _contextID;
	double _timestamp;
	long long _phase;
	long long _type;
	unsigned long long _source;
	unsigned long long _gameControllerComponent;
	double _force;
	unsigned long long _clickCount;
	UIKey* _key;

}

@property (assign,nonatomic) double timestamp;                                        //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) long long phase;                                         //@synthesize phase=_phase - In the implementation block
@property (assign,nonatomic) long long type;                                          //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) unsigned long long source;                               //@synthesize source=_source - In the implementation block
@property (assign,nonatomic) unsigned long long gameControllerComponent;              //@synthesize gameControllerComponent=_gameControllerComponent - In the implementation block
@property (assign,nonatomic) double force;                                            //@synthesize force=_force - In the implementation block
@property (assign,nonatomic) unsigned long long clickCount;                           //@synthesize clickCount=_clickCount - In the implementation block
@property (assign,getter=isLongClick,nonatomic) BOOL longClick;                       //@synthesize longClick=_longClick - In the implementation block
@property (assign,nonatomic) unsigned contextID;                                      //@synthesize contextID=_contextID - In the implementation block
@property (nonatomic,retain) UIKey * key;                                             //@synthesize key=_key - In the implementation block
+(id)_keyboardPressInfoForType:(long long)arg1 isKeyDown:(BOOL)arg2 timestamp:(double)arg3 contextID:(unsigned)arg4 ;
-(id)description;
-(id)init;
-(void)setType:(long long)arg1 ;
-(long long)type;
-(unsigned long long)source;
-(void)setSource:(unsigned long long)arg1 ;
-(UIKey *)key;
-(double)timestamp;
-(void)setKey:(UIKey *)arg1 ;
-(unsigned)contextID;
-(void)setContextID:(unsigned)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(double)force;
-(void)setForce:(double)arg1 ;
-(long long)phase;
-(void)setPhase:(long long)arg1 ;
-(id)_sourceDescription;
-(unsigned long long)clickCount;
-(void)setClickCount:(unsigned long long)arg1 ;
-(BOOL)isLongClick;
-(void)setLongClick:(BOOL)arg1 ;
-(void)setGameControllerComponent:(unsigned long long)arg1 ;
-(unsigned long long)gameControllerComponent;
@end

