//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IDSDMessageStoreMigrator : NSObject
{
}

+ (id)sharedInstance;	// IMP=0x00000001003b449c
- (void)_checkAndUpdateDBIfRequiredForClass:(unsigned int)arg1;	// IMP=0x00000001003b47b8
- (void)migrateClassD;	// IMP=0x00000001003b4784
- (void)migrateClassC;	// IMP=0x00000001003b474c
- (void)migrateClassA;	// IMP=0x00000001003b4718
- (id)init;	// IMP=0x00000001003b4630

@end

