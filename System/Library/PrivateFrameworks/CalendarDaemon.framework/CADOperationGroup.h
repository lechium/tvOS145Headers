/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:26 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class ClientConnection;

@interface CADOperationGroup : NSObject {

	ClientConnection* _conn;

}

@property (nonatomic,readonly) ClientConnection * conn;              //@synthesize conn=_conn - In the implementation block
+(BOOL)requiresEventAccess;
+(BOOL)requiresReminderAccess;
+(BOOL)requiresEventOrReminderAccess;
+(id)whitelistedBundles;
-(id)initWithClientConnection:(id)arg1 ;
-(BOOL)accessGrantedToPerformSelector:(SEL)arg1 ;
-(ClientConnection *)conn;
@end

