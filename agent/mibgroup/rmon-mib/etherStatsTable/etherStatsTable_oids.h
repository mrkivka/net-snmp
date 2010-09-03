/*
 * Note: this file originally auto-generated by mib2c using
 *  : generic-table-oids.m2c 12855 2005-09-27 15:56:08Z rstory $
 *
 * $Id:$
 */
#ifndef ETHERSTATSTABLE_OIDS_H
#define ETHERSTATSTABLE_OIDS_H

#ifdef __cplusplus
extern          "C" {
#endif


    /*
     * column number definitions for table etherStatsTable 
     */
#define ETHERSTATSTABLE_OID              1,3,6,1,2,1,16,1,1

#define COLUMN_ETHERSTATSINDEX         1
#define COLUMN_ETHERSTATSINDEX_FLAG    (0x1 << 0)

#define COLUMN_ETHERSTATSDATASOURCE         2
#define COLUMN_ETHERSTATSDATASOURCE_FLAG    (0x1 << 1)

#define COLUMN_ETHERSTATSDROPEVENTS         3
#define COLUMN_ETHERSTATSDROPEVENTS_FLAG    (0x1 << 2)

#define COLUMN_ETHERSTATSOCTETS         4
#define COLUMN_ETHERSTATSOCTETS_FLAG    (0x1 << 3)

#define COLUMN_ETHERSTATSPKTS         5
#define COLUMN_ETHERSTATSPKTS_FLAG    (0x1 << 4)

#define COLUMN_ETHERSTATSBROADCASTPKTS         6
#define COLUMN_ETHERSTATSBROADCASTPKTS_FLAG    (0x1 << 5)

#define COLUMN_ETHERSTATSMULTICASTPKTS         7
#define COLUMN_ETHERSTATSMULTICASTPKTS_FLAG    (0x1 << 6)

#define COLUMN_ETHERSTATSCRCALIGNERRORS         8
#define COLUMN_ETHERSTATSCRCALIGNERRORS_FLAG    (0x1 << 7)

#define COLUMN_ETHERSTATSUNDERSIZEPKTS         9
#define COLUMN_ETHERSTATSUNDERSIZEPKTS_FLAG    (0x1 << 8)

#define COLUMN_ETHERSTATSOVERSIZEPKTS         10
#define COLUMN_ETHERSTATSOVERSIZEPKTS_FLAG    (0x1 << 9)

#define COLUMN_ETHERSTATSFRAGMENTS         11
#define COLUMN_ETHERSTATSFRAGMENTS_FLAG    (0x1 << 10)

#define COLUMN_ETHERSTATSJABBERS         12
#define COLUMN_ETHERSTATSJABBERS_FLAG    (0x1 << 11)

#define COLUMN_ETHERSTATSCOLLISIONS         13
#define COLUMN_ETHERSTATSCOLLISIONS_FLAG    (0x1 << 12)

#define COLUMN_ETHERSTATSPKTS64OCTETS         14
#define COLUMN_ETHERSTATSPKTS64OCTETS_FLAG    (0x1 << 13)

#define COLUMN_ETHERSTATSPKTS65TO127OCTETS         15
#define COLUMN_ETHERSTATSPKTS65TO127OCTETS_FLAG    (0x1 << 14)

#define COLUMN_ETHERSTATSPKTS128TO255OCTETS         16
#define COLUMN_ETHERSTATSPKTS128TO255OCTETS_FLAG    (0x1 << 15)

#define COLUMN_ETHERSTATSPKTS256TO511OCTETS         17
#define COLUMN_ETHERSTATSPKTS256TO511OCTETS_FLAG    (0x1 << 16)

#define COLUMN_ETHERSTATSPKTS512TO1023OCTETS         18
#define COLUMN_ETHERSTATSPKTS512TO1023OCTETS_FLAG    (0x1 << 17)

#define COLUMN_ETHERSTATSPKTS1024TO1518OCTETS         19
#define COLUMN_ETHERSTATSPKTS1024TO1518OCTETS_FLAG    (0x1 << 18)

#define COLUMN_ETHERSTATSOWNER         20
#define COLUMN_ETHERSTATSOWNER_FLAG    (0x1 << 19)

#define COLUMN_ETHERSTATSSTATUS         21
#define COLUMN_ETHERSTATSSTATUS_FLAG    (0x1 << 20)


#define ETHERSTATSTABLE_MIN_COL   COLUMN_ETHERSTATSINDEX
#define ETHERSTATSTABLE_MAX_COL   COLUMN_ETHERSTATSSTATUS


    /*
     * TODO:405:r: Review ETHERSTATSTABLE_SETTABLE_COLS macro.
     * OR together all the writable cols.
     */
#define ETHERSTATSTABLE_SETTABLE_COLS (COLUMN_ETHERSTATSINDEX_FLAG | COLUMN_ETHERSTATSDATASOURCE_FLAG | COLUMN_ETHERSTATSDROPEVENTS_FLAG | COLUMN_ETHERSTATSOCTETS_FLAG | COLUMN_ETHERSTATSPKTS_FLAG | COLUMN_ETHERSTATSBROADCASTPKTS_FLAG | COLUMN_ETHERSTATSMULTICASTPKTS_FLAG | COLUMN_ETHERSTATSCRCALIGNERRORS_FLAG | COLUMN_ETHERSTATSUNDERSIZEPKTS_FLAG | COLUMN_ETHERSTATSOVERSIZEPKTS_FLAG | COLUMN_ETHERSTATSFRAGMENTS_FLAG | COLUMN_ETHERSTATSJABBERS_FLAG | COLUMN_ETHERSTATSCOLLISIONS_FLAG | COLUMN_ETHERSTATSPKTS64OCTETS_FLAG | COLUMN_ETHERSTATSPKTS65TO127OCTETS_FLAG | COLUMN_ETHERSTATSPKTS128TO255OCTETS_FLAG | COLUMN_ETHERSTATSPKTS256TO511OCTETS_FLAG | COLUMN_ETHERSTATSPKTS512TO1023OCTETS_FLAG | COLUMN_ETHERSTATSPKTS1024TO1518OCTETS_FLAG | COLUMN_ETHERSTATSOWNER_FLAG | COLUMN_ETHERSTATSSTATUS_FLAG)
    /*
     * TODO:405:r: Review ETHERSTATSTABLE_REQUIRED_COLS macro.
     * OR together all the required rows for row creation.
     * default is writable cols w/out defaults.
     */
#define ETHERSTATSTABLE_REQUIRED_COLS (COLUMN_ETHERSTATSDATASOURCE_FLAG | COLUMN_ETHERSTATSOWNER_FLAG | COLUMN_ETHERSTATSSTATUS_FLAG)

#define ETHERSTATSTABLE_VALID_COL    COLUMN_ETHERSTATSJABBERS_FLAG 



#ifdef __cplusplus
}
#endif
#endif                          /* ETHERSTATSTABLE_OIDS_H */