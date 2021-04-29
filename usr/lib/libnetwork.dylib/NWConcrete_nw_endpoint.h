/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:39 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /usr/lib/libnetwork.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libnetwork.dylib/libnetwork.dylib-Structs.h>
#import <libobjc.A.dylib/OS_nw_endpoint.h>

@protocol OS_nw_context, OS_nw_interface, OS_dnssd_cname_array;
@class NSObject, NSString;

@interface NWConcrete_nw_endpoint : NSObject <OS_nw_endpoint> {

	NSObject*<OS_nw_context> context;
	NSObject*<OS_nw_interface> interface;
	int interface_type;
	char* description;
	char* redacted_description;
	NWConcrete_nw_endpoint* parent_endpoint;
	NSObject*<OS_dnssd_cname_array> cname_array;
	nw_endpoint_alterative_s* first_alternative;
	SCD_Struct_NW29* alternative_list;
	os_unfair_lock_s endpoint_lock;
	os_unfair_lock_s description_lock;
	nw_hash_tableRef associations;
	unsigned short alternate_port;
	unsigned is_local_domain : 1;
	unsigned parent_is_proxy : 1;
	unsigned description_used : 1;
	unsigned redacted_description_used : 1;
	unsigned do_not_redact_description : 1;

}

@property (nonatomic,readonly) unsigned type; 
@property (nonatomic,readonly) const char* domainForPolicy; 
@property (nonatomic,readonly) const char* hostname; 
@property (nonatomic,readonly) unsigned short port; 
@property (nonatomic,retain) NSObject*<OS_nw_txt_record> txtRecord; 
@property (nonatomic,retain) NSObject*<OS_dispatch_data> echConfig; 
@property (assign,nonatomic) unsigned short priority; 
@property (assign,nonatomic) unsigned short weight; 
@property (nonatomic,readonly) const char* getDescription; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(id)init;
-(void)dealloc;
-(id)redactedDescription;
-(id)copyDictionary;
-(unsigned short)port;
-(unsigned)type;
-(unsigned short)priority;
-(void)setPriority:(unsigned short)arg1 ;
-(char*)createDescription:(BOOL)arg1 ;
-(BOOL)isEqualToEndpoint:(id)arg1 matchInterface:(BOOL)arg2 matchParent:(BOOL)arg3 ;
-(id)copyEndpoint;
-(unsigned long long)getHash;
-(const char*)hostname;
-(const char*)domainForPolicy;
-(NSObject*<OS_nw_txt_record>)txtRecord;
-(void)setTxtRecord:(NSObject*<OS_nw_txt_record>)arg1 ;
-(NSObject*<OS_dispatch_data>)echConfig;
-(void)setEchConfig:(NSObject*<OS_dispatch_data>)arg1 ;
-(unsigned short)weight;
-(void)setWeight:(unsigned short)arg1 ;
-(const char*)getDescription;
-(const char*)getRedactedDescription;
@end
