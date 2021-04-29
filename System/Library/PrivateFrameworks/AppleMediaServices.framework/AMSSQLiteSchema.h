/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:58 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class AMSSQLiteConnection;

@interface AMSSQLiteSchema : NSObject {

	AMSSQLiteConnection* _connection;

}

@property (readonly) long long currentUserVersion; 
-(id)initWithConnection:(id)arg1 ;
-(long long)currentUserVersion;
-(BOOL)tableExists:(id)arg1 ;
-(BOOL)migrateToVersion:(long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)_setUserVersion:(long long)arg1 ;
-(BOOL)column:(id)arg1 existsInTable:(id)arg2 ;
@end

