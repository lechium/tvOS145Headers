/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:28 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CFNetwork/CFNetwork-Structs.h>
#import <libobjc.A.dylib/AuthBrokerQuery.h>

@interface ABRequestHandler : NSObject <AuthBrokerQuery> {

	AuthBrokerAuthenticator* authenticator;

}
-(id)init;
-(void)fetchProxyCredential:(id)arg1 reply:(/*^block*/id)arg2 ;
@end
