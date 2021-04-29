/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:57 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray, MFProtectedSQLiteConnection;

@interface _MFLibrarySQLiteConnectionWrapper : NSObject {

	NSArray* _stack;
	BOOL _writer;
	BOOL _invalid;
	MFProtectedSQLiteConnection* _connection;
	unsigned long long _refcount;

}

@property (nonatomic,readonly) MFProtectedSQLiteConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) BOOL writer;                                           //@synthesize writer=_writer - In the implementation block
@property (nonatomic,readonly) unsigned long long refcount;                           //@synthesize refcount=_refcount - In the implementation block
@property (assign,nonatomic) BOOL invalid;                                            //@synthesize invalid=_invalid - In the implementation block
+(id)wrapperWithConnection:(id)arg1 forWriting:(BOOL)arg2 ;
-(void)dealloc;
-(MFProtectedSQLiteConnection *)connection;
-(BOOL)invalid;
-(BOOL)writer;
-(void)setInvalid:(BOOL)arg1 ;
-(unsigned long long)incrementRefcount;
-(unsigned long long)decrementRefcount;
-(id)initWithConnection:(id)arg1 forWriting:(BOOL)arg2 ;
-(unsigned long long)refcount;
@end

