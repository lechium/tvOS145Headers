/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:19 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/RemoteXPC.framework/RemoteXPC
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/OS_xpc_object.h>

@protocol OS_nw_connection, OS_nw_listener, OS_dispatch_queue;
@class NSObject, OS_xpc_remote_channel, OS_xpc_remote_message, OS_xpc_remote_pending_stream, OS_xpc_remote_stream, OS_xpc_remote_outstanding_reply, OS_remote_service, OS_xpc_remote_listener, NSString;

@interface OS_xpc_remote_connection : NSObject <OS_xpc_object> {

	char* remote_service_name;
	NSObject*<OS_nw_connection> root_connection;
	NSObject*<OS_nw_listener> root_listener;
	BOOL root_channel_helo_received;
	OS_xpc_remote_channel* root_channel;
	BOOL reply_channel_helo_received;
	OS_xpc_remote_channel* reply_channel;
	BOOL server_mode;
	unsigned char protocol_version_number;
	unsigned long long protocol_feature_flags;
	OS_xpc_remote_message* msgq_stqh_first;
	OS_xpc_remote_message* msgq_stqh_last;
	OS_xpc_remote_pending_stream* pending_streams_stqh_first;
	OS_xpc_remote_pending_stream* pending_streams_stqh_last;
	OS_xpc_remote_stream* streams_stqh_first;
	OS_xpc_remote_stream* streams_stqh_last;
	OS_xpc_remote_outstanding_reply* outstanding_replies_stqh_first;
	OS_xpc_remote_outstanding_reply* outstanding_replies_stqh_last;
	unsigned long long next_msg_id;
	unsigned long long first_msg_id;
	unsigned long long local_service_version;
	unsigned long long remote_service_version;
	unsigned traffic_class;
	int error;
	OS_remote_service* remote_service;
	int preexisting_socket;
	NSObject*<OS_nw_connection> preexisting_connection;
	BOOL requires_nw_listener_create_workaround;
	BOOL _send_in_progress;
	int _state;
	int _type;
	NSObject*<OS_dispatch_queue> _internal_queue;
	NSObject*<OS_dispatch_queue> _target_queue;
	/*^block*/id _event_handler;
	OS_xpc_remote_listener* _listener;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> internal_queue;              //@synthesize internal_queue=_internal_queue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> target_queue;                //@synthesize target_queue=_target_queue - In the implementation block
@property (nonatomic,copy) id event_handler;                                           //@synthesize event_handler=_event_handler - In the implementation block
@property (assign) int state;                                                          //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) int type;                                                 //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL send_in_progress;                                    //@synthesize send_in_progress=_send_in_progress - In the implementation block
@property (nonatomic,retain) OS_xpc_remote_listener * listener;                        //@synthesize listener=_listener - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)setType:(int)arg1 ;
-(int)type;
-(int)state;
-(void)setState:(int)arg1 ;
-(OS_xpc_remote_listener *)listener;
-(id)event_handler;
-(void)setListener:(OS_xpc_remote_listener *)arg1 ;
-(NSObject*<OS_dispatch_queue>)internal_queue;
-(void)setTarget_queue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setEvent_handler:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)target_queue;
-(void)setInternal_queue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)send_in_progress;
-(void)setSend_in_progress:(BOOL)arg1 ;
@end

