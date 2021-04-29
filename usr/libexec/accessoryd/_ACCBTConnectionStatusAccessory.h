//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ACCPlatformBluetoothStatusAccessory, NSMutableDictionary, NSString;

@interface _ACCBTConnectionStatusAccessory : NSObject
{
    NSString *_accessoryUID;	// 8 = 0x8
    NSMutableDictionary *_components;	// 16 = 0x10
    ACCPlatformBluetoothStatusAccessory *_pluginAccessory;	// 24 = 0x18
}

+ (id)accessoryList;	// IMP=0x00000001000f9044
- (void).cxx_destruct;	// IMP=0x00000001000f90e0
@property(retain, nonatomic) ACCPlatformBluetoothStatusAccessory *pluginAccessory; // @synthesize pluginAccessory=_pluginAccessory;
@property(readonly, nonatomic) NSMutableDictionary *components; // @synthesize components=_components;
@property(retain, nonatomic) NSString *accessoryUID; // @synthesize accessoryUID=_accessoryUID;
- (void)componentUpdate:(id)arg1;	// IMP=0x00000001000f8bd0
- (void)dealloc;	// IMP=0x00000001000f8b30
- (id)initWithUID:(id)arg1;	// IMP=0x00000001000f8a4c

@end
