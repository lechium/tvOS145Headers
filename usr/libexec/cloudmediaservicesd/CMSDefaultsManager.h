//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSUserDefaults;

@interface CMSDefaultsManager : NSObject
{
    NSUserDefaults *_CMSDefaults;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x0000000100004dac
- (void).cxx_destruct;	// IMP=0x0000000100005188
@property(retain, nonatomic) NSUserDefaults *CMSDefaults; // @synthesize CMSDefaults=_CMSDefaults;
- (_Bool)removeDefaultForKey:(id)arg1;	// IMP=0x000000010000510c
- (id)objectForDefault:(id)arg1;	// IMP=0x00000001000050a0
- (_Bool)setObject:(id)arg1 forDefault:(id)arg2 requiresCoding:(_Bool)arg3;	// IMP=0x0000000100004f30
- (_Bool)setObject:(id)arg1 forDefault:(id)arg2;	// IMP=0x0000000100004ec4
- (id)init;	// IMP=0x0000000100004e48

@end
