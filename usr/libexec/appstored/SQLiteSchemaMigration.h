//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, SQLiteConnection;

@interface SQLiteSchemaMigration : NSObject
{
    SQLiteConnection *_connection;	// 8 = 0x8
    NSError *_error;	// 16 = 0x10
    _Bool _success;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000001000bb6b0
@property(readonly) _Bool success; // @synthesize success=_success;
@property(readonly) NSError *error; // @synthesize error=_error;
- (void)_executeStatement:(id)arg1 canFailMigration:(_Bool)arg2 bindings:(CDUnknownBlockType)arg3;	// IMP=0x00000001000bb5c0
- (void)executeStatement:(id)arg1 bindings:(CDUnknownBlockType)arg2;	// IMP=0x00000001000bb5ac
- (void)executeStatement:(id)arg1;	// IMP=0x00000001000bb598
- (void)executeOptionalStatement:(id)arg1 bindings:(CDUnknownBlockType)arg2;	// IMP=0x00000001000bb584
- (void)executeOptionalStatement:(id)arg1;	// IMP=0x00000001000bb570
- (id)initWithConnection:(id)arg1;	// IMP=0x00000001000bb4f0

@end
