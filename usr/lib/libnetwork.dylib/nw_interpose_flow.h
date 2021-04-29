/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:39 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /usr/lib/libnetwork.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_nw_interface, OS_nw_path_flow_registration, OS_nw_path_flow;
@class NSObject;

@interface nw_interpose_flow : NSObject {

	NSObject*<OS_nw_interface> _interface;
	NSObject*<OS_nw_path_flow_registration> _registration;
	NSObject*<OS_nw_path_flow> _flow;
	/*^block*/id _eventHandler;

}
-(void)dealloc;
-(void)close;
-(id)initWithInterface:(id)arg1 registration:(id)arg2 eventHandler:(/*^block*/id)arg3 ;
-(void)notifyFlowEvent:(int)arg1 ;
-(void)closeFlow;
-(void)clearFlowEventHandler;
-(void)resetFlow:(id)arg1 ;
-(BOOL)matchNexusAgent:(unsigned char)arg1 ;
-(BOOL)matchNexusAgentWithFlow:(id)arg1 ;
-(BOOL)matchNexusInstance:(id)arg1 ;
@end

