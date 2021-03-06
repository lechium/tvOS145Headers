//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKCacheReader.h"

@class NSString;

@interface GKPlayerProfileCacheReader : GKCacheReader
{
    int _familiarity;	// 8 = 0x8
    NSString *_localPlayerGCID;	// 16 = 0x10
    NSString *_language;	// 24 = 0x18
}

+ (id)readerWithFamiliarity:(int)arg1 toPlayer:(id)arg2 language:(id)arg3 databaseConnection:(id)arg4;	// IMP=0x00000001000b22c4
- (void).cxx_destruct;	// IMP=0x00000001000b2f68
@property(copy, nonatomic) NSString *language; // @synthesize language=_language;
@property(copy, nonatomic) NSString *localPlayerGCID; // @synthesize localPlayerGCID=_localPlayerGCID;
@property(nonatomic) int familiarity; // @synthesize familiarity=_familiarity;
- (void)readResources:(id)arg1 inDatabase:(struct sqlite3 *)arg2 statementStore:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x00000001000b28b8
- (id)processAvailableResource:(id)arg1 retrievedWithStatement:(struct sqlite3_stmt *)arg2 fromDatabase:(struct sqlite3 *)arg3 statementStore:(id)arg4;	// IMP=0x00000001000b28b0
- (id)playerProfileSQLString;	// IMP=0x00000001000b2800
- (double)TTLForProfileStatementResult:(struct sqlite3_stmt *)arg1;	// IMP=0x00000001000b2750
- (id)playerForProfileStatementResult:(struct sqlite3_stmt *)arg1;	// IMP=0x00000001000b26a0
- (int)availablePiecesForProfileStatementResult:(struct sqlite3_stmt *)arg1;	// IMP=0x00000001000b25f0
- (void)bindParametersForProfileStatement:(struct sqlite3_stmt *)arg1 playerGCID:(id)arg2;	// IMP=0x00000001000b2518
- (id)initWithFamiliarity:(int)arg1 toPlayer:(id)arg2 language:(id)arg3 databaseConnection:(id)arg4;	// IMP=0x00000001000b2400

@end

