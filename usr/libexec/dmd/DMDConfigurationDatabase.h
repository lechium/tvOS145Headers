//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSPersistentContainer.h>

@interface DMDConfigurationDatabase : NSPersistentContainer
{
}

+ (id)_newDatabaseWithURL:(id)arg1;	// IMP=0x00000001000244f8
+ (id)newUserDatabase;	// IMP=0x0000000100024498
+ (id)descriptionForSQLiteStoreWithDatabaseURL:(id)arg1;	// IMP=0x0000000100024428
+ (id)managedObjectModel;	// IMP=0x0000000100024134
- (void)performBackgroundTask:(CDUnknownBlockType)arg1;	// IMP=0x0000000100024674
- (id)init;	// IMP=0x00000001000245ec
- (id)description;	// IMP=0x0000000100024234

@end
