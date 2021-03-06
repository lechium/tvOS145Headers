/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:20 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AccessibilityUtilities/AccessibilityUtilities-Structs.h>
@class NSString, AXReplayableGesture, NSUUID;

@interface AXSwitchRecipeMapping : NSObject {

	BOOL _optional;
	NSString* _action;
	NSString* _longPressAction;
	AXReplayableGesture* _gesture;
	AXReplayableGesture* _longPressGesture;
	NSUUID* _switchUUID;
	long long _switchOriginalAction;
	CGPoint _holdPoint;

}

@property (nonatomic,copy) NSString * action;                                     //@synthesize action=_action - In the implementation block
@property (nonatomic,copy) NSString * longPressAction;                            //@synthesize longPressAction=_longPressAction - In the implementation block
@property (nonatomic,retain) AXReplayableGesture * gesture;                       //@synthesize gesture=_gesture - In the implementation block
@property (nonatomic,retain) AXReplayableGesture * longPressGesture;              //@synthesize longPressGesture=_longPressGesture - In the implementation block
@property (assign,nonatomic) CGPoint holdPoint;                                   //@synthesize holdPoint=_holdPoint - In the implementation block
@property (assign,getter=isOptional,nonatomic) BOOL optional;                     //@synthesize optional=_optional - In the implementation block
@property (nonatomic,copy) NSUUID * switchUUID;                                   //@synthesize switchUUID=_switchUUID - In the implementation block
@property (assign,nonatomic) long long switchOriginalAction;                      //@synthesize switchOriginalAction=_switchOriginalAction - In the implementation block
+(id)recipeMappingWithDictionaryRepresentation:(id)arg1 ;
-(id)description;
-(id)init;
-(id)dictionaryRepresentation;
-(NSString *)action;
-(void)setAction:(NSString *)arg1 ;
-(BOOL)isOptional;
-(void)setOptional:(BOOL)arg1 ;
-(AXReplayableGesture *)gesture;
-(void)setGesture:(AXReplayableGesture *)arg1 ;
-(void)setLongPressAction:(NSString *)arg1 ;
-(void)setLongPressGesture:(AXReplayableGesture *)arg1 ;
-(void)setHoldPoint:(CGPoint)arg1 ;
-(void)setSwitchUUID:(NSUUID *)arg1 ;
-(void)setSwitchOriginalAction:(long long)arg1 ;
-(NSString *)longPressAction;
-(CGPoint)holdPoint;
-(AXReplayableGesture *)longPressGesture;
-(NSUUID *)switchUUID;
-(long long)switchOriginalAction;
@end

