/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:43 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol BSXPCServerClient <NSObject>
@property (nonatomic,readonly) NSObject*<OS_xpc_object> connection; 
@required
-(void)invalidate;
-(void)resume;
-(void)suspend;
-(NSObject*<OS_xpc_object>)connection;

@end

