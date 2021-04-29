//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, NSURL;
@protocol OS_xpc_object;

@interface PKBundle : NSObject
{
    NSString *_supportPath;	// 8 = 0x8
    NSObject<OS_xpc_object> *__bundle;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100018e94
@property(retain) NSObject<OS_xpc_object> *_bundle; // @synthesize _bundle=__bundle;
@property(readonly) NSString *plugInsPath;
@property(readonly) NSString *executablePath;
- (id)bundleDirectory:(id)arg1;	// IMP=0x0000000100018d78
@property(readonly) NSString *supportPath; // @synthesize supportPath=_supportPath;
@property(readonly) NSString *path;
@property(readonly) NSURL *url;
@property(readonly) NSString *bundleIdentifier;
@property(readonly) NSDictionary *infoDictionary;
- (id)stringProperty:(int)arg1;	// IMP=0x0000000100018a74
- (id)initWithXPCBundle:(id)arg1;	// IMP=0x0000000100018a00
- (id)initWithExecutablePath:(id)arg1;	// IMP=0x0000000100018950
- (id)initWithExecutableURL:(id)arg1;	// IMP=0x00000001000188f4
- (id)initWithPath:(id)arg1;	// IMP=0x0000000100018894
- (id)initWithURL:(id)arg1;	// IMP=0x0000000100018838
- (id)initForMainBundle;	// IMP=0x00000001000187f0

@end

