/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:37 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WebInspector/RWIProtocolJSONObject.h>

@class RWIProtocolSecurityConnection, RWIProtocolSecurityCertificate;

@interface RWIProtocolSecurity : RWIProtocolJSONObject

@property (nonatomic,retain) RWIProtocolSecurityConnection * connection; 
@property (nonatomic,retain) RWIProtocolSecurityCertificate * certificate; 
-(RWIProtocolSecurityConnection *)connection;
-(void)setConnection:(RWIProtocolSecurityConnection *)arg1 ;
-(RWIProtocolSecurityCertificate *)certificate;
-(void)setCertificate:(RWIProtocolSecurityCertificate *)arg1 ;
@end

