//
//  SSNCustomer.m
//  ShipStation
//
//  Created by Miguel Cazares on 8/24/15.
//  Copyright (c) 2015 ShipStation. All rights reserved.
//

#import "MLPCustomer.h"

@implementation MLPCustomer

+ (NSDictionary *)JSONKeyPathsByPropertyKey {
    return @{ @"customerID": @"CustomerID",
              @"sellerID": @"SellerID",
              @"name": @"Name",
              @"company": @"Company",
              @"shipAddress1": @"Street1",
              @"shipAddress2": @"Street2",
              @"shipCity": @"City",
              @"shipState": @"State",
              @"shipPostalCode": @"PostalCode",
              @"shipCountryCode": @"CountryCode",
              @"shipPhone": @"Phone",
              @"buyerEmail": @"Email", };
}

@end
