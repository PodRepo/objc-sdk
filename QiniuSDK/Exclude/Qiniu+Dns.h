//
//  QNZone.h
//  QiniuSDK
//
//  Created by joshua li on 15/9/11.
//  Copyright (c) 2015年 Qiniu. All rights reserved.
//

#ifndef QiniuSDK_QNZone_h
#define QiniuSDK_QNZone_h

#import "QNConfiguration.h"
#import "QNHttpManager.h"
#import "QNSessionManager.h"

#import "HappyDNS.h"

@interface QNHttpManager(DNS)

- (instancetype)initWithTimeout:(UInt32)timeout
                   urlConverter:(QNUrlConvert)converter
                            dns:(QNDnsManager *)dns;
@end


@interface QNSessionManager(DNS)

- (instancetype)initWithProxy:(NSDictionary *)proxyDict
                      timeout:(UInt32)timeout
                 urlConverter:(QNUrlConvert)converter
                          dns:(QNDnsManager*)dns;
@end


@interface QNConfiguration(DNS)
@property (nonatomic, strong) QNDnsManager *dns;

@end

@interface QNConfigurationBuilder(DNS)
@property (nonatomic, strong) QNDnsManager *dns;

@end

#endif
