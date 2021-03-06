//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface EAHIDAccessory : NSObject
{
    NSString *name;	// 8 = 0x8
    NSString *serialNumber;	// 16 = 0x10
    NSString *modelNumber;	// 24 = 0x18
    NSString *manufacturer;	// 32 = 0x20
    NSString *hardwareVersion;	// 40 = 0x28
    NSString *EAProtocolString;	// 48 = 0x30
    NSString *EAConnectionUUID;	// 56 = 0x38
    NSString *EAEndpointUUID;	// 64 = 0x40
    struct __IOHIDDevice *HIDDevice;	// 72 = 0x48
    unsigned int HIDReportSizeInput;	// 80 = 0x50
    unsigned int HIDReportSizeOutput;	// 84 = 0x54
    unsigned char HIDReportID;	// 88 = 0x58
    unsigned short firmwareVersionMajor;	// 90 = 0x5a
    unsigned short firmwareVersionMinor;	// 92 = 0x5c
    unsigned short firmwareVersionRelease;	// 94 = 0x5e
}

@property unsigned char HIDReportID; // @synthesize HIDReportID;
@property unsigned int HIDReportSizeOutput; // @synthesize HIDReportSizeOutput;
@property unsigned int HIDReportSizeInput; // @synthesize HIDReportSizeInput;
@property unsigned short firmwareVersionRelease; // @synthesize firmwareVersionRelease;
@property unsigned short firmwareVersionMinor; // @synthesize firmwareVersionMinor;
@property unsigned short firmwareVersionMajor; // @synthesize firmwareVersionMajor;
@property struct __IOHIDDevice *HIDDevice; // @synthesize HIDDevice;
@property(retain) NSString *EAEndpointUUID; // @synthesize EAEndpointUUID;
@property(retain) NSString *EAConnectionUUID; // @synthesize EAConnectionUUID;
@property(retain) NSString *EAProtocolString; // @synthesize EAProtocolString;
@property(retain) NSString *hardwareVersion; // @synthesize hardwareVersion;
@property(retain) NSString *manufacturer; // @synthesize manufacturer;
@property(retain) NSString *modelNumber; // @synthesize modelNumber;
@property(retain) NSString *serialNumber; // @synthesize serialNumber;
@property(retain) NSString *name; // @synthesize name;
- (void)dealloc;	// IMP=0x0000000100031718
- (id)initWithName:(id)arg1 HIDDeviceRef:(struct __IOHIDDevice *)arg2;	// IMP=0x0000000100031698

@end

