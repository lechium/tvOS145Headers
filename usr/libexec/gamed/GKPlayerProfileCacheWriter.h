//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GKDataWriter-Protocol.h"

@class GKDatabaseConnection, NSString;

@interface GKPlayerProfileCacheWriter : NSObject <GKDataWriter>
{
    int _familiarity;	// 8 = 0x8
    NSString *_localPlayerID;	// 16 = 0x10
    NSString *_language;	// 24 = 0x18
    GKDatabaseConnection *_connection;	// 32 = 0x20
}

+ (id)writerWithFamiliarity:(int)arg1 toPlayer:(id)arg2 language:(id)arg3 databaseConnection:(id)arg4;	// IMP=0x0000000100029f30
- (void).cxx_destruct;	// IMP=0x000000010002c0fc
@property(retain, nonatomic) GKDatabaseConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) NSString *language; // @synthesize language=_language;
@property(retain, nonatomic) NSString *localPlayerID; // @synthesize localPlayerID=_localPlayerID;
@property(nonatomic) int familiarity; // @synthesize familiarity=_familiarity;
- (void)writeResources:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000010002b6f0
- (void)writeToDatabase:(struct sqlite3 *)arg1 statementStore:(id)arg2 withInsertSQL:(id)arg3 updateSQL:(id)arg4 bindOperation:(CDUnknownBlockType)arg5;	// IMP=0x000000010002b2a8
- (void)bindParametersForRelationshipStatement:(struct sqlite3_stmt *)arg1 resource:(id)arg2;	// IMP=0x000000010002b14c
- (id)relationshipUpdateSQL;	// IMP=0x000000010002b0dc
- (id)relationshipInsertSQL;	// IMP=0x000000010002b06c
- (void)bindParametersForProfileStatement:(struct sqlite3_stmt *)arg1 resource:(id)arg2;	// IMP=0x000000010002a998
- (id)profileUpdateSQLForResource:(id)arg1;	// IMP=0x000000010002a50c
- (id)profileInsertSQL;	// IMP=0x000000010002a3a4
- (void)bindParametersForEmailStatement:(struct sqlite3_stmt *)arg1 email:(id)arg2 ofPlayer:(id)arg3;	// IMP=0x000000010002a204
- (id)emailUpdateSQL;	// IMP=0x000000010002a190
- (id)emailInsertSQL;	// IMP=0x000000010002a120
- (id)initWithFamiliarity:(int)arg1 toPlayer:(id)arg2 language:(id)arg3 databaseConnection:(id)arg4;	// IMP=0x0000000100029ffc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

