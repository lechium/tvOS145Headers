/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:22 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSUUID, AXMIDIEvent;

@interface AXSwitch : NSObject <NSSecureCoding> {

	unsigned short _keyCode;
	long long _action;
	long long _longPressAction;
	NSString* _name;
	NSString* _source;
	NSString* _type;
	NSString* _productName;
	NSString* _manufacturerName;
	NSUUID* _uuid;
	long long _buttonNumber;
	long long _headSwitch;
	AXMIDIEvent* _midiEvent;
	NSString* _remoteSwitchIdentifier;
	NSString* _remoteDeviceName;
	NSString* _remoteDeviceIdentifier;

}

@property (nonatomic,retain) NSUUID * uuid;                                        //@synthesize uuid=_uuid - In the implementation block
@property (assign,nonatomic) long long action;                                     //@synthesize action=_action - In the implementation block
@property (assign,nonatomic) long long longPressAction;                            //@synthesize longPressAction=_longPressAction - In the implementation block
@property (nonatomic,copy) NSString * name;                                        //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * source;                                    //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) NSString * localizedSourceDescription; 
@property (nonatomic,retain) NSString * type;                                      //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * productName;                                 //@synthesize productName=_productName - In the implementation block
@property (nonatomic,copy) NSString * manufacturerName;                            //@synthesize manufacturerName=_manufacturerName - In the implementation block
@property (nonatomic,readonly) BOOL hasLongPressAction; 
@property (nonatomic,readonly) BOOL supportsLongPress; 
@property (assign,nonatomic) unsigned short keyCode;                               //@synthesize keyCode=_keyCode - In the implementation block
@property (assign,nonatomic) long long buttonNumber;                               //@synthesize buttonNumber=_buttonNumber - In the implementation block
@property (assign,nonatomic) long long headSwitch;                                 //@synthesize headSwitch=_headSwitch - In the implementation block
@property (nonatomic,retain) AXMIDIEvent * midiEvent;                              //@synthesize midiEvent=_midiEvent - In the implementation block
@property (nonatomic,copy) NSString * remoteSwitchIdentifier;                      //@synthesize remoteSwitchIdentifier=_remoteSwitchIdentifier - In the implementation block
@property (nonatomic,copy) NSString * remoteDeviceName;                            //@synthesize remoteDeviceName=_remoteDeviceName - In the implementation block
@property (nonatomic,copy) NSString * remoteDeviceIdentifier;                      //@synthesize remoteDeviceIdentifier=_remoteDeviceIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)switchWithAction:(long long)arg1 name:(id)arg2 source:(id)arg3 type:(id)arg4 ;
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setType:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)type;
-(void)setName:(NSString *)arg1 ;
-(NSString *)source;
-(void)setSource:(NSString *)arg1 ;
-(NSUUID *)uuid;
-(NSString *)productName;
-(unsigned short)keyCode;
-(long long)action;
-(void)setAction:(long long)arg1 ;
-(void)setUuid:(NSUUID *)arg1 ;
-(NSString *)manufacturerName;
-(void)setProductName:(NSString *)arg1 ;
-(void)setKeyCode:(unsigned short)arg1 ;
-(long long)buttonNumber;
-(AXMIDIEvent *)midiEvent;
-(void)setMidiEvent:(AXMIDIEvent *)arg1 ;
-(void)setButtonNumber:(long long)arg1 ;
-(void)setLongPressAction:(long long)arg1 ;
-(long long)longPressAction;
-(BOOL)supportsLongPress;
-(long long)headSwitch;
-(NSString *)remoteSwitchIdentifier;
-(NSString *)remoteDeviceName;
-(NSString *)remoteDeviceIdentifier;
-(id)initWithAction:(long long)arg1 name:(id)arg2 source:(id)arg3 type:(id)arg4 ;
-(BOOL)hasLongPressAction;
-(NSString *)localizedSourceDescription;
-(void)setManufacturerName:(NSString *)arg1 ;
-(void)setHeadSwitch:(long long)arg1 ;
-(void)setRemoteSwitchIdentifier:(NSString *)arg1 ;
-(void)setRemoteDeviceName:(NSString *)arg1 ;
-(void)setRemoteDeviceIdentifier:(NSString *)arg1 ;
@end

