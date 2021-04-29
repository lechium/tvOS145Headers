//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GKDataReader-Protocol.h"

@class GKDatabaseConnection, NSString;

@interface GKCacheReader : NSObject <GKDataReader>
{
    GKDatabaseConnection *_connection;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010013c4d0
@property(retain, nonatomic) GKDatabaseConnection *connection; // @synthesize connection=_connection;
- (void)readResources:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000010013c0c8
- (void)readResources:(id)arg1 inDatabase:(struct sqlite3 *)arg2 statementStore:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x000000010013bfe0
- (id)initWithDatabaseConnection:(id)arg1;	// IMP=0x000000010013bf6c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

