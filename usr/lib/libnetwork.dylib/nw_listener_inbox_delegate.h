/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:39 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /usr/lib/libnetwork.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol nw_listener_inbox_delegate
@required
-(BOOL)canHandleNewConnection:(id)arg1;
-(void)handleInbound:(id)arg1 addProtocolInbox:(BOOL)arg2;
-(void)handleInboundPacket:(const char*)arg1 length:(unsigned short)arg2 from:(id)arg3 to:(id)arg4 interface:(id)arg5 socket:(id)arg6;
-(void)handleInboxFailed:(id)arg1 error:(id)arg2;
-(void)handleInboxCancelComplete:(id)arg1;

@end

