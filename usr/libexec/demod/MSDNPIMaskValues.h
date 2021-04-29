//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface MSDNPIMaskValues : NSObject
{
    _Bool _isNPIDevice;	// 8 = 0x8
    NSMutableDictionary *_maskValuesLookUpTable;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x000000010006bb40
- (void).cxx_destruct;	// IMP=0x000000010006c580
@property(retain) NSMutableDictionary *maskValuesLookUpTable; // @synthesize maskValuesLookUpTable=_maskValuesLookUpTable;
@property _Bool isNPIDevice; // @synthesize isNPIDevice=_isNPIDevice;
- (void)initMaskValuesLookUpTable;	// IMP=0x000000010006c148
- (id)getMaskValueForKey:(id)arg1;	// IMP=0x000000010006c038
- (void)saveDeviceInfo:(id)arg1;	// IMP=0x000000010006bc44
- (id)init;	// IMP=0x000000010006bbac

@end

