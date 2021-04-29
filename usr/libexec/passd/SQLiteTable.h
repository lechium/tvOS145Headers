//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface SQLiteTable : NSObject
{
    NSMutableArray *_columns;	// 8 = 0x8
    NSMutableArray *_tableConstraints;	// 16 = 0x10
    NSString *_tableName;	// 24 = 0x18
}

+ (id)SQLToRenameTable:(id)arg1 to:(id)arg2;	// IMP=0x00000001002167b8
+ (id)SQLToDropTableNamed:(id)arg1;	// IMP=0x000000010021672c
+ (id)SQLToAddColumnWithSQL:(id)arg1 toTableNamed:(id)arg2;	// IMP=0x0000000100216688
+ (id)SQLToInsertColumnNames:(id)arg1 fromTableNamed:(id)arg2 intoTableNamed:(id)arg3;	// IMP=0x00000001002163e0
+ (id)tableWithSQL:(id)arg1;	// IMP=0x0000000100215ed0
- (void).cxx_destruct;	// IMP=0x0000000100216c8c
@property(copy, nonatomic) NSString *tableName; // @synthesize tableName=_tableName;
- (id)_columnNamed:(id)arg1;	// IMP=0x0000000100216af0
- (unsigned long long)_indexOfColumnNamed:(id)arg1;	// IMP=0x0000000100216a00
- (id)_initWithTableSQL:(id)arg1;	// IMP=0x0000000100216890
- (id)creationSQL;	// IMP=0x0000000100216194
- (id)columnNames;	// IMP=0x0000000100216010
- (_Bool)renameColumn:(id)arg1 to:(id)arg2;	// IMP=0x0000000100215f84
- (_Bool)removeColumn:(id)arg1;	// IMP=0x0000000100215f20

@end
