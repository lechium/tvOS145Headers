//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface MLDDatabaseFileDiagnostic : NSObject
{
    NSString *_databasePath;	// 8 = 0x8
    NSDictionary *_fileAttributes;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100008508
@property(readonly, nonatomic) NSDictionary *fileAttributes; // @synthesize fileAttributes=_fileAttributes;
@property(readonly, nonatomic) NSString *databasePath; // @synthesize databasePath=_databasePath;
- (id)description;	// IMP=0x0000000100008474
- (id)initWithDatabasePath:(id)arg1;	// IMP=0x0000000100008398

@end

