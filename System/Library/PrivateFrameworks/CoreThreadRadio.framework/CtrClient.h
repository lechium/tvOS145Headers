/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:25 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreThreadRadio.framework/CoreThreadRadio
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CoreThreadRadio/CoreThreadRadio-Structs.h>
@interface CtrClient : NSObject {

	shared_ptr<CtrXPC::Client>* CtrXPCClientPtr;

}
-(Result)resume;
-(Result)reset:(BOOL)arg1 ;
-(Result)setChannel:(unsigned char)arg1 ;
-(Result)addService:(Ctr_add_service)arg1 ;
-(Result)removeService:(Ctr_remove_service)arg1 ;
-(id)init:(const char*)arg1 ;
-(Result)scan:(Ctr_scan)arg1 ;
-(Result)join:(Ctr_join)arg1 ;
-(Result)leave;
-(Result)threadStart:(id)arg1 outUniqueId:(id*)arg2 waitForSync:(BOOL)arg3 ;
-(Result)generateThreadDiagnosticsMonitorLogs;
-(shared_ptr<CtrXPC::Client>*)createClient:(const char*)arg1 ;
-(void)setEventHandler:(const basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>*)arg1 EventBlock:(/*^block*/id)arg2 dqueue:(queue*)arg3 ;
-(void)setClientEventsOn;
-(void)setClientEventsOff;
-(Result)getProperty:(const char*)arg1 output:(void*)arg2 ;
-(Result)setProperty:(const char*)arg1 prperty_val:(const char*)arg2 ;
-(Result)sendData:(const char*)arg1 data:(char*)arg2 data_length:(unsigned long long)arg3 ;
-(Result)addPrefix:(Ctr_prefix)arg1 ;
-(Result)removePrefix:(Ctr_prefix)arg1 ;
-(Result)form:(Ctr_form)arg1 ;
-(Result)joiner:(Ctr_joiner)arg1 ;
-(Result)sendNwDiagReqGet:(SCD_Struct_Ct1)arg1 ;
-(Result)attachToNetwork:(Ctr_attachToNetwork*)arg1 output:(void*)arg2 ;
-(Result)attachToNetwork:(Ctr_attachToNetwork*)arg1 ;
-(Result)commissionOrFormNetwork:(BOOL)arg1 output:(void*)arg2 ;
-(Result)generatePSKc:(Ctr_generatePSKc*)arg1 output:(void*)arg2 ;
-(Result)threadStart:(const char*)arg1 outputUniqueId:(const char*)arg2 ;
-(Result)threadStart:(id)arg1 outUniqueId:(id*)arg2 ;
-(Result)threadLeave;
@end
