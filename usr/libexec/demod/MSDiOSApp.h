//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface MSDiOSApp : NSObject
{
    NSString *_path;	// 8 = 0x8
    NSDictionary *_info;	// 16 = 0x10
}

+ (id)appWithPath:(id)arg1;	// IMP=0x000000010001e724
- (void).cxx_destruct;	// IMP=0x000000010001fc84
@property(retain) NSDictionary *info; // @synthesize info=_info;
@property(retain) NSString *path; // @synthesize path=_path;
- (id)serachForFileWithSuffix:(id)arg1 inFolder:(id)arg2;	// IMP=0x000000010001f990
- (id)codeSignaturePathForAlmondApp;	// IMP=0x000000010001f818
- (_Bool)isAlmondApp;	// IMP=0x000000010001f75c
- (id)getCodeResourcesURL;	// IMP=0x000000010001f59c
- (id)getExcutableURL;	// IMP=0x000000010001f3e0
- (id)versionInfo;	// IMP=0x000000010001f1b0
- (id)uniqueIdentifier;	// IMP=0x000000010001ea38
- (void)dealloc;	// IMP=0x000000010001e9d4
- (id)initWithPath:(id)arg1;	// IMP=0x000000010001e778

@end

