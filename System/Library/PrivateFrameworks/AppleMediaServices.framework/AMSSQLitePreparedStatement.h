/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:58 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface AMSSQLitePreparedStatement : NSObject {

	const void* _connectionPointer;
	NSString* _SQL;

}

@property (nonatomic,readonly) const void* connectionPointer;              //@synthesize connectionPointer=_connectionPointer - In the implementation block
@property (setter=QL,nonatomic,copy,readonly) NSString * SQL;              //@synthesize SQL=_SQL - In the implementation block
-(NSString *)SQL;
-(id)initWithConnection:(const void*)arg1 SQL:(id)arg2 ;
-(const void*)connectionPointer;
@end

